#!/bin/sh

wget --no-check-certificate  --post-data="fqdn=insa-lyon.fr&password=<password>&submit=Envoyer&user=<username>" \
-O /dev/null 'https://securelogin.arubanetworks.com/cgi-bin/login'