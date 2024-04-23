import cv2
import numpy as np

from path import img_path

img = cv2.imread(img_path + "Chapter16/digits.png")
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

cells = [np.hsplit(row, 100) for row in np.vsplit(gray, 50)]
x = np.array(cells)
# print(x.shape) # (50, 100, 20, 20)

train = x[:, :50]
val = x[:, 50:]

train = train.reshape(-1, 400).astype(np.float32)
val = val.reshape(-1, 400).astype(np.float32)

k = np.arange(10)
train_labels = np.repeat(k, 250)[:, np.newaxis]
val_labels = np.repeat(k, 250)[:, np.newaxis]

# 训练
# knn = cv2.ml.KNearest_create()
knn = cv2.ml.KNearest_create()
knn.train(train, cv2.ml.ROW_SAMPLE, train_labels)
ret, result, neighbours, dist = knn.findNearest(val, 5)

matches = result == val_labels
correct = np.count_nonzero(matches)
acc = correct * 100 / result.size
print(acc)
cv2.dnn_Model
