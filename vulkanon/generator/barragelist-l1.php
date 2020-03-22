<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

class BarrageList_L1 {
  function getList1() {
    $list = array();

    $test = false;
    if ($test) {
      $list[] = "ACTIONTYPE_BOSS_ENABLE";
      $list[] = 60;
    }

    foreach (range(0, 10) as $i) {
      $list[] = array(120 - 108 + $i * 20, 0, 2, 'l0_enemy21.cpp');
      $list[] = 20;
    }
    foreach (range(0, 10) as $i) {
      $list[] = array(120 + 100 - $i * 20, 0, 2, 'l0_enemy21.cpp');
      $list[] = 20;
    }

    foreach (range(1, 8) as $i) {
      if ($i % 2 == 0) {
        $list[] = array(0, $i * 16, 16, 'l0_enemy20-right.cpp');
      } else {
        $list[] = array(240 - 8, $i * 16, 16, 'l0_enemy20-left.cpp');
      }
      $list[] = 30;
    }
    $list[] = 1000;

    foreach (range(1, 10) as $y) {
      foreach (range(1, 3) as $x) {
        $list[] = array(120 - 4 - $x * 10, $y * 10, 1, 'l0_enemy0.cpp');
        $list[] = array(120 - 4 + $x * 10, $y * 10, 1, 'l0_enemy0.cpp');
      }
    }
    $list[] = 300;

    $list[] = array(120 - 4, 80, 64, 'l0_boss9.cpp');

    $list[] = 2000;
    $list[] = "ACTIONTYPE_BOSS_ENABLE";

    return $list;
  }

  function getList2() {
    $list = array();

    foreach (range(1, 20) as $i) {
      if ($i % 2 == 0) {
        $list[] = array(120 - 48, 10, 4, 'l0_enemy2.cpp');
      } else {
        $list[] = array(120 + 40, 10, 4, 'l0_enemy2.cpp');
      }
      if ($i % 4 == 0) {
        $list[] = array(120 - 88, 10, 4, 'l0_enemy3.cpp');
        $list[] = array(120 + 80, 10, 4, 'l0_enemy3.cpp');
      }
      $list[] = 60;
    }

    return $list;
  }

  function getList3() {
    $list = array();

    $yPos = array(
      '40', '100', '80', '120', '100',
      );
    foreach (range(0, 4) as $i) {
      if ($i % 2 == 0) {
        $list[] = array(0, $yPos[$i], 32, 'l0_enemy20-right.cpp');
      } else {
        $list[] = array(240 - 8, $yPos[$i], 32, 'l0_enemy20-left.cpp');
      }
      $list[] = 120;
    }

    $list[] = array(120 - 108, 0, 32, 'l0_boss7.cpp');
    $list[] = array(120 + 100, 0, 32, 'l0_boss7.cpp');

    return $list;
  }

  function getList4() {
    $list = array();

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 42, 40, 4, 'l0_boss6.cpp');
      $list[] = 40;
    }
    $list[] = 400;

    foreach (range(0, 5) as $i) {
      $list[] = array(120 - 108, 0, 2, 'l0_enemy21.cpp');
      $list[] = array(120 + 100, 0, 2, 'l0_enemy21.cpp');
      $list[] = 20;
    }

    return $list;
  }

  function getList5() {
    $list = array();

    $list[] = array(120 - 88, 0, 8, 'l0_boss0.cpp');
    $list[] = array(120 + 80, 0, 8, 'l0_boss0.cpp');
    $list[] = 800;

    return $list;
  }
}

?>
