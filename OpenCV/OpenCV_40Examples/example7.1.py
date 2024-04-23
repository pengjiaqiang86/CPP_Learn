import cv2
from path import img_path

img1 = cv2.imread(img_path + "Chapter7/opening.bmp")
img2 = cv2.imread(img_path + "Chapter7/opening2.bmp")

cv2.imshow('img1', img1)
cv2.imshow('img2', img2)

cv2.waitKey(0)
cv2.destroyAllWindows()