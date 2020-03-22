#!/usr/bin/env php 
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/php/libcommon.php', dirname(__FILE__));

$xmlfile = Common::getArg1();

$group = NULL;
$name = NULL;
if (preg_match('/\[(.+?)\]_(.+)/', $xmlfile, $matches)) {
  $group = $matches[1];
  $name = $matches[2];
} else {
  $group = basename(dirname($xmlfile));
  $name = basename($xmlfile);
}

$destfile = strtolower("data/xml/$group/$name");
if (! file_exists(dirname($destfile))) {
  @mkdir(dirname($destfile), 0700, true);
}

$doc = new DOMDocument;
$doc->preserveWhiteSpace = false;
if ($doc->load($xmlfile) == FALSE) {
  Common::error("[ERROR] error in $xmlfile");
}
$doc->save($destfile);

?>
