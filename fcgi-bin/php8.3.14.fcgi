#!/bin/sh
export PHP_FCGI_CHILDREN=4
export PHP_FCGI_MAX_REQUESTS=200
exec /Applications/MAMP/bin/php/php8.3.14/bin/php-cgi -c "/Library/Application Support/appsolute/MAMP PRO/conf/php8.3.14.ini"
