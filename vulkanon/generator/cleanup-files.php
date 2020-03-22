#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

$list = file('make-barragelist.php');
foreach ($list as $line) {
  if (preg_match("|//'(.+).cpp'|", $line, $matches)) {
    $xmlfile = "data/xml/{$matches[1]}.xml";
    if (file_exists($xmlfile)) {
      print "cleanup $xmlfile \n";
      unlink($xmlfile);
    }
  }
}

?>
