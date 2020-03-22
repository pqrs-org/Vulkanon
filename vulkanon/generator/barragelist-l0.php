<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

class BarrageList_L0 {
  function getList1() {
    $list = array();

    $test = false;
    if ($test) {
      $list[] = "ACTIONTYPE_BOSS_ENABLE";
      $list[] = 60;
    }

    foreach (range(0, 16) as $i) {
      $list[] = array(120 - 60, 90, 4, 'l0_boss10.cpp');
      $list[] = 20;
    }

    $list[] = 10000;
    $list[] = "ACTIONTYPE_BOSS_ENABLE";

    return $list;
  }

  function getList2() {
    $list = array();

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 88, $i * 10, 1, 'l0_enemy22.cpp');
      $list[] = array(120 + 80, $i * 10, 1, 'l0_enemy22.cpp');
    }
    $list[] = 60;

    return $list;
  }

  function getList3() {
    $list = array();

    $posX = array('40', '10', '60', '20', '40', '80', '10', '100');
    foreach (range(0, count($posX) - 1) as $i) {
      $list[] = array(120 - 8 - $posX[$i], 30, 32, 'l0_enemy23.cpp');
      $list[] = array(120 +  $posX[$i], 30, 32, 'l0_enemy23.cpp');
      $list[] = 20;
    }

    return $list;
  }

  function getList4() {
    $list = array();

    $list[] = array(120 - 68, 50, 4, 'l0_enemy7.cpp');
    $list[] = array(120 + 60, 50, 4, 'l0_enemy7.cpp');
    $list[] = 1000;

    return $list;
  }

  function getList5() {
    $list = array();

    foreach (range(1, 5) as $i) {
      $list[] = array(120 - 108 + $i * 10, 0, 8, 'l0_enemy4.cpp');
      $list[] = 60;
    }
    foreach (range(1, 5) as $i) {
      $list[] = array(120 + 100 - $i * 10, 0, 8, 'l0_enemy4.cpp');
      $list[] = 60;
    }

    return $list;
  }
}

?>
