#!/bin/sh
groups $FT_USER | tr -d "\n" | tr ' ' ',' | cat -e 
