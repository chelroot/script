# -*- coding: utf-8 -*-
from PIL import Image

img = Image.open("fivekittems1.jpg")
box = (100, 100, 400, 400)
region = img.crop(box)
img2 = img.rotate(45)
img2.save("img2.jpg")
region.save("img3.jpg")