<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

; // add semicolon for Emacs php-mode indent issue.

ini_set('max_execution_time', 0);
define('ANGLENUM', 256);

class Common
{
  function getArg1() {
    $xmlfile = $_SERVER['argv'][1];
    if (! file_exists($xmlfile)) {
      Common::error("File ${argv[1]} is not exist!");
      exit;
    }
    return $xmlfile;
  }

  function getTmpFile($name, $origfile) {
    $file = sprintf('tmp/%s/%s/%s',
                    $name,
                    basename(dirname($origfile)),
                    basename($origfile));
    @mkdir(dirname($file), 0700, true);
    return $file;
  }

  // ------------------------------------------------------------
  function adjustAngle($text) {
    $function = sprintf('return "({$matches[1]} * 1.0 * %d / 360)";', ANGLENUM);
    return preg_replace_callback(
      '/([\d\.]+)/',
      create_function('$matches', $function),
      $text);
  }

  function convSpecialChar($text) {
    $conved = str_replace('$rank', '1', $text);
    $conved = preg_replace('/\$rand/', 'FixedPointNum::random()', $conved);
    return $conved;
  }

  function dropSpecialChar($text) {
    $text = preg_replace('/\$rand/', '1', $text);
    $text = preg_replace('/\$rank/', '1', $text);
    return $text;
  }

  function error($message) {
    error_log("$$$ [ERROR] ($message) $$$");
    exit(1);
  }

  function getTopElementByName($domElem, $name) {
    if ($domElem->nodeName == $name) {
      return $domElem;
    }

    if (! $domElem->hasChildNodes()) {
      return NULL;
    }
    foreach ($domElem->childNodes as $childNodes) {
      $node = Common::getTopElementByName($childNodes, $name);
      if ($node !== NULL) {
        return $node;
      }
    }
    return NULL;
  }

  function getBulletMLNode($document) {
    return $document->getElementsByTagName('bulletml')->item(0);
  }
}

?>
