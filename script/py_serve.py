from flask import Flask

from flask import Flask,request,render_template
import datetime

server=Flask(__name__)

@server.route('/login',methods=['post','get'])
def get_time():
    now=str(datetime.datetime.now())#把当前时间转换成字符串
    body = request.get_data()
    print("body ", body)
    return "当前的时间是：%s"%now


server.run(port=8888)
