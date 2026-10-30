from libemg.datasets import OneSubjectMyoDataset
from libemg.emg_predictor import EMGClassifier
from libemg.feature_extractor import FeatureExtractor
from libemg.offline_metrics import OfflineMetrics
import matplotlib.pyplot as plt
from libemg.datasets import *
import numpy as np
from sklearn.metrics import confusion_matrix
from sklearn.metrics import ConfusionMatrixDisplay

WINDOW_SIZE = 20
WINDOW_INCREMENT = 10 
FEATURE_SET = "HTD"

# Load in dataset
dataset = get_dataset_list()['MinimalTrainingData']()
data = dataset.prepare_data()


# Split data into training and testing
train_data = data['Train']
test_data = data['Test']

# Extract windows 
train_windows, train_meta = train_data.parse_windows(WINDOW_SIZE, WINDOW_INCREMENT)
test_windows, test_meta = test_data.parse_windows(WINDOW_SIZE, WINDOW_INCREMENT)

extractor = FeatureExtractor()
om = OfflineMetrics()

# Create data set dictionary using training data
data_set = {}
data_set['training_features'] = extractor.extract_feature_group(FEATURE_SET, train_windows)
data_set['training_labels'] = train_meta['classes']

test_features = extractor.extract_feature_group(FEATURE_SET, test_windows)

#classifiers = ["LDA"]

classifiers = ["LDA","KNN","RF","QDA","NB","MLP"]

# Extract metrics for each classifier
for classifier in classifiers:
    model = EMGClassifier(classifier)

    # Fit and run the classifier
    model.fit(data_set.copy())
    preds, probs = model.run(test_features)

    # Null label is 2 since it is the no movement class
    metrics = om.extract_common_metrics(test_meta["classes"], preds, 2)
    #confusion = om.get_CONF_MAT(test_meta["classes"],preds)
    #SimpleConf = np.round(confusion, 2)
    #precision = om.get_PREC(test_meta["classes"],preds)
    confusion = confusion_matrix(test_meta["classes"], preds)
    
    disp = ConfusionMatrixDisplay.from_predictions(
    test_meta["classes"],
    preds,
    cmap=plt.cm.Blues,
    normalize="true",
    )
    disp.ax_.set_title(classifier)
    
    
    # Plot feature space 
    print(classifier)
    print(confusion)
    print(" ")
    
plt.show()
extractor.visualize_feature_space(data_set['training_features'], projection="PCA", classes=train_meta['classes'], test_feature_dic=test_features, t_classes=test_meta['classes'])
