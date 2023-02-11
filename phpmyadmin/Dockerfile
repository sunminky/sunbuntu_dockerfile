FROM phpmyadmin:latest
MAINTAINER Minky

# Apply New Theme #
RUN sed -i "s/\$cfg\['ThemeDefault'\] = 'pmahomme';/\$cfg\['ThemeDefault'\] = 'metro';/g" libraries/config.default.php

#docker run --name myadmin -d --restart always --network web_bridge --ip 172.19.0.7 --link mysql:db phpadmin:0.0.1
