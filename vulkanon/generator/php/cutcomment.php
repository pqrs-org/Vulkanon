#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/libcommon.php', dirname(__FILE__));

$xmlfile = Common::getArg1();

$xmlbody = file_get_contents($xmlfile);
$xmlbody = str_replace("\t", '', $xmlbody);
$xmlbody = preg_replace('/<!--.+?-->/', '', $xmlbody);

$destfile = Common::getTmpFile("00-cutcomment", $xmlfile);
@mkdir(dirname($destfile), 0700, true);
file_put_contents($destfile, $xmlbody);

?>
