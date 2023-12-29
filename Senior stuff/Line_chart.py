#Python課程學習成果練習

import matplotlib.pyplot as plt
import random   #用來生成偽隨機數和進行隨機操作

x1 = list(range(1,11))  #共十個數據
y1 = [83, 50, 79, 30, 10, 52, 59, 13, 76, 43]

plt.plot(x1, y1, color='r', markerfacecolor='blue', marker='o')
plt.xlabel('No.')   #X軸標籤
plt.ylabel('Score') #Y軸標籤

for a, b in zip(x1, y1):
    plt.text(a, b, (a, b), ha='center', va='bottom', fontsize='10')   #對折線圖上面的文字做編輯
    #ha=>文本水平對齊方式，用法：'left', 'center', 'right'
    #va=>文本垂直對齊方式，用法：'top', 'center', 'bottom'

plt.legend(['Line1'])
plt.show()