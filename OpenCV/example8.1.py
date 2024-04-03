import cv2

img = cv2.imread("./test.webp")

gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

ret, binary = cv2.threshold(gray, 180, 255, cv2.THRESH_BINARY)
binary = 255 - binary
contours, hierarchy = cv2.findContours(binary, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
hull = cv2.convexHull(contours[0])
cv2.polylines(img, [hull], True, (0, 0, 255), 2)
print(hull)
cv2.imshow("imh", img)
cv2.waitKey(0)