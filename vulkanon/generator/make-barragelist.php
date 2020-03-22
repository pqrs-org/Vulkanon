#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

require_once 'barragelist-l0.php';
require_once 'barragelist-l1.php';
require_once 'barragelist-l2.php';
require_once 'barragelist-l3.php';

print "#ifndef BARRAGELIST_HPP\n";
print "#define BARRAGELIST_HPP\n";
print "#include \"bullet.hpp\"\n\n";

$listBulletStepFunc = array();

// ------------------------------------------------------------
$fileList_L0_1 = BarrageList_L0::getList1();
$fileList_L0_2 = BarrageList_L0::getList2();
$fileList_L0_3 = BarrageList_L0::getList3();
$fileList_L0_4 = BarrageList_L0::getList4();
$fileList_L0_5 = BarrageList_L0::getList5();

$fileList_L1_1 = BarrageList_L1::getList1();
$fileList_L1_2 = BarrageList_L1::getList2();
$fileList_L1_3 = BarrageList_L1::getList3();
$fileList_L1_4 = BarrageList_L1::getList4();
$fileList_L1_5 = BarrageList_L1::getList5();

$fileList_L2_1 = BarrageList_L2::getList1();
$fileList_L2_2 = BarrageList_L2::getList2();
$fileList_L2_3 = BarrageList_L2::getList3();
$fileList_L2_4 = BarrageList_L2::getList4();
$fileList_L2_5 = BarrageList_L2::getList5();

$fileList_L3_1 = BarrageList_L3::getList1();
$fileList_L3_2 = BarrageList_L3::getList2();
$fileList_L3_3 = BarrageList_L3::getList3();
$fileList_L3_4 = BarrageList_L3::getList4();
$fileList_L3_5 = BarrageList_L3::getList5();

// ============================================================
$GLOBALS['listName'] = array();
outputSubList($fileList_L0_1, "listBarrage_L0_1");
outputSubList($fileList_L0_2, "listBarrage_L0_2");
outputSubList($fileList_L0_3, "listBarrage_L0_3");
outputSubList($fileList_L0_4, "listBarrage_L0_4");
outputSubList($fileList_L0_5, "listBarrage_L0_5");
outputList('listBarrage_L0_all');

$GLOBALS['listName'] = array();
outputSubList($fileList_L1_1, "listBarrage_L1_1");
outputSubList($fileList_L1_2, "listBarrage_L1_2");
outputSubList($fileList_L1_3, "listBarrage_L1_3");
outputSubList($fileList_L1_4, "listBarrage_L1_4");
outputSubList($fileList_L1_5, "listBarrage_L1_5");
outputList('listBarrage_L1_all');

$GLOBALS['listName'] = array();
outputSubList($fileList_L2_1, "listBarrage_L2_1");
outputSubList($fileList_L2_2, "listBarrage_L2_2");
outputSubList($fileList_L2_3, "listBarrage_L2_3");
outputSubList($fileList_L2_4, "listBarrage_L2_4");
outputSubList($fileList_L2_5, "listBarrage_L2_5");
outputList('listBarrage_L2_all');

$GLOBALS['listName'] = array();
outputSubList($fileList_L3_1, "listBarrage_L3_1");
outputSubList($fileList_L3_2, "listBarrage_L3_2");
outputSubList($fileList_L3_3, "listBarrage_L3_3");
outputSubList($fileList_L3_4, "listBarrage_L3_4");
outputSubList($fileList_L3_5, "listBarrage_L3_5");
outputList('listBarrage_L3_all');


function getUniqID($filename) {
  if (! file_exists($filename)) {
    error_log("[ERROR] $filename is not exist!");
    exit(1);
  }

  $f = fopen($filename, 'r');
  $string = fgets($f);

  $uniqID = NULL;
  if (preg_match('/XXX uniqID XXX (.+) XXX/', $string, $matches)) {
    $uniqID = $matches[1];
  }

  fclose($f);
  return $uniqID;
}

function outputSubList($list, $name) {
  $GLOBALS['listName'][] = $name;

  foreach ($list as $key => $struct) {
    if (is_array($struct)) {
      $filename = $struct[3];
      if ($filename) {
        $uniqID = getUniqID("data/code/vulkanon/${filename}");
        if ($uniqID == NULL) {
          error_log("$$$ [ERROR] ($filename is not found) $$$");
        }
        $list[$key]['uniqID'] = $uniqID;
        print "BulletInfo *genBulletFunc_{$uniqID}(FixedPointNum posx, FixedPointNum posy);\n";
      }
    }
  }

  print "const BarrageInfo {$name}[] = { \n";
  foreach ($list as $struct) {
    if (is_array($struct)) {
      if (preg_match("/^ACTIONTYPE_/", $struct[0])) {
        print "S{$struct[0]}S";

        print "{ 0, 0, 0, NULL, {$struct[0]}, {$struct[1]} }, \n";

      } else {
        $x = intval($struct[0]);
        $y = intval($struct[1]);
        $life = intval($struct[2]);
        $uniqID = $struct['uniqID'];

        print "{ {$x}, {$y}, {$life}, genBulletFunc_{$uniqID}, ACTIONTYPE_BULLET_NORMAL, 0 }, \n";
      }
    } else {
      if (preg_match("/^ACTIONTYPE_/", $struct)) {
        print "{ 0, 0, 0, NULL, {$struct}, 0 }, \n";
      } else {
        print "{ 0, 0, 0, NULL, ACTIONTYPE_WAIT, {$struct} }, \n";
      }
    }
  }
  print "{ 0, 0, 0, NULL, END_OF_ACTIONTYPE, 0 }, }; \n\n";
}

function outputList($name) {
  print "const BarrageInfo * const {$name}[] = { \n";
  foreach ($GLOBALS['listName'] as $n) {
    print "  $n, ";
  }
  print "NULL, }; \n\n";
}

print "#endif\n";

?>
