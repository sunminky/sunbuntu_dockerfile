#!/bin/bash

iptables -A INPUT -p tcp -s 192.168.0.0/16 --dport 32032 -j ACCEPT
iptables -A INPUT -p udp -s 192.168.0.0/16 --dport 32032 -j ACCEPT
iptables -A INPUT -p tcp --dport 32032 -j DROP
iptables -A INPUT -p udp --dport 32032 -j DROP
