#!/bin/bash

ISLOAD=$(lsmod|grep tusbd)

if [ "$ISLOAD" == "" ]; then
	echo "Load Module"
	insmod /home/usb/files/modules/src/tusbd/tusbd.ko || true
else
	echo "Start Service"
	/usr/local/usb-redirector/bin/usbsrvd && bash
fi

#RESULT=$(lsmod|grep tusbd|sed 's/ /!/g')

#LEN=${#RESULT}
#START=`expr $LEN - 2`

#USED=$(lsmod|grep tusbd|sed 's/ /!/g' | cut -c $START-$LEN | sed 's/!//g')

#/usr/local/usb-redirector/bin/usbsrvd

#if [ $USED -lt 1 ]; then
#    echo "도커 재시작"
#else 
#    echo "서비스 실행"
#    bash
#fi 
