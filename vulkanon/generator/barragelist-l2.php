<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

class BarrageList_L2 {
  function getList1() {
    $list = array();

    $test = false;
    if ($test) {
      $list[] = "ACTIONTYPE_BOSS_ENABLE";
      $list[] = 60;
    }

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 4, 20 + $i * 10, 4, 'l0_enemy1-left.cpp');
      $list[] = array(120 - 4, 20 + $i * 10, 4, 'l0_enemy1-right.cpp');
      $list[] = 30;
    }

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 108, 10, 3, 'l0_enemy0.cpp');
      $list[] = array(120 + 100, 10, 3, 'l0_enemy0.cpp');
      $list[] = 20;
    }
    $list[] = 60;

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 108, $i * 10, 3, 'l0_enemy14-right.cpp');
      $list[] = array(120 + 100, $i * 10, 3, 'l0_enemy14-left.cpp');
    }
    $list[] = 300;

    $list[] = array(120 - 4, 30, 32, 'l0_boss1.cpp');
    $list[] = 300;

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 42, 40, 8, 'l0_boss6.cpp');
      $list[] = 40;
    }
    $list[] = 400;

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 108 + $i * 2, $i * 10, 4, 'l0_enemy15-left.cpp');
      $list[] = array(120 + 100 - $i * 2, $i * 10, 4, 'l0_enemy15-right.cpp');
    }
    $list[] = 500;
    $list[] = "ACTIONTYPE_BOSS_ENABLE";

    return $list;
  }

  function getList2() {
    $list = array();

    $list[] = array(120 - 4, 40, 16, 'l0_boss7.cpp');
    $list[] = 20;
    $list[] = array(10, 40, 64, 'l0_boss7.cpp');
    $list[] = array(222, 40, 64, 'l0_boss7.cpp');
    $list[] = 1200;

    $list[] = array(120 - 4, 40, 16, 'l0_enemy16.cpp');
    $list[] = 300;
    foreach (range(1, 20) as $i) {
      $list[] = array(120 - 108, 10, 16, 'l0_enemy12.cpp');
      $list[] = array(120 + 100, 10, 16, 'l0_enemy12.cpp');
      $list[] = 60;
    }
    $list[] = 100;

    return $list;
  }

  function getList3() {
    $list = array();

    foreach (range(0, 3) as $i) {
      $list[] = array(120 - 108, 10, 4, 'l0_enemy17.cpp');
      $list[] = array(120 + 100, 10, 4, 'l0_enemy17.cpp');
      $list[] = 60;
    }

    foreach (range(0, 10) as $i) {
      $list[] = array(120 - 88, 10, 4, 'l0_enemy3.cpp');
      $list[] = array(120 + 80, 10, 4, 'l0_enemy3.cpp');
      $list[] = 10;
    }

    $list[] = 300;

    return $list;
  }

  function getList4() {
    $list = array();

    foreach (range(1, 5) as $i) {
      $list[] = array(120 - 60, 80, 4, 'l0_enemy19-right.cpp');
      $list[] = array(120 + 52, 80, 1, 'l0_enemy19-left.cpp');
      $list[] = 30;
    }
    $list[] = 200;

    $list[] = array(120 - 108, 30, 32, 'l0_enemy9-right.cpp');
    $list[] = array(120 + 100, 30, 32, 'l0_enemy9-left.cpp');
    $list[] = 100;

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 4, 30, 16, 'l0_enemy11-left.cpp');
      $list[] = array(120 - 4, 30, 16, 'l0_enemy11-right.cpp');
      $list[] = 30;
    }

    return $list;
  }

  function getList5() {
    $list = array();

    $list[] = array(120 - 88, 0, 16, 'l0_boss8-right.cpp');
    $list[] = array(120 + 80, 0, 16, 'l0_boss8-left.cpp');
    $list[] = 300;

    $list[] = array(120 - 108, 0, 16, 'l0_enemy18-right.cpp');
    $list[] = array(120 + 100, 0, 16, 'l0_enemy18-left.cpp');
    $list[] = 300;

    $list[] = array(120 - 88, 50, 4, 'l0_enemy6.cpp');
    $list[] = array(120 + 80, 50, 4, 'l0_enemy6.cpp');
    $list[] = 300;

    foreach (range(10, 1) as $i) {
      $list[] = array(120 - $i * 10 - 8, 10, 16, 'l0_enemy12.cpp');
      $list[] = array(120 + $i * 10, 10, 16, 'l0_enemy12.cpp');
      $list[] = 10;
    }
    $list[] = 100;

    return $list;
  }
}

?>
