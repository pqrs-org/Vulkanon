#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

$targetDir = $argv[1];
if ($targetDir == NULL) {
  error_log("Usage: {$argv[0]} userbml-directory");
  exit(1);
}

if (! file_exists($targetDir)) {
  error_log("$targetDir is not found");
  exit(1);
}

foreach (glob("$targetDir/*.bml") as $file) {
  $xml = iconv('SJIS', 'UTF-8//IGNORE', file_get_contents($file));
  $doc = new DOMDocument;
  $doc->preserveWhiteSpace = false;
  if ($doc->loadXML($xml) == FALSE) {
    file_put_contents('/tmp/mogemoge', $xml);
    error_log("[ERROR] error in $file");
    continue;
  }

  $group = NULL;
  $filename = NULL;

  $group = trim($doc->getElementsByTagName('group')->item(0)->nodeValue);
  $filename = trim($doc->getElementsByTagName('filename')->item(0)->nodeValue);

  if ($group === NULL || $filename === NULL) {
    continue;
  }

  $destfile = strtolower("data/xml/$group/$filename.xml");
  $bulletmlElem = $doc->getElementsByTagName('bulletml')->item(0);
  if ($bulletmlElem == NULL) {
    continue;
  }

  if (! file_exists(dirname($destfile))) {
    mkdir(dirname($destfile));
  }

  $newXML = $doc->saveXML($bulletmlElem);
  file_put_contents($destfile, $newXML);
}


?>
