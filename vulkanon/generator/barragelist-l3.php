<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

class BarrageList_L3 {
  function getList1() {
    $list = array();

    $test = false;
    if ($test) {
      $list[] = "ACTIONTYPE_BOSS_ENABLE";
      $list[] = 60;
    }

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 108, 10, 3, 'l0_enemy0.cpp');
      $list[] = array(120 + 100, 10, 3, 'l0_enemy0.cpp');
      $list[] = 20;
    }
    $list[] = 60;

    $list[] = array(120 - 88, 0, 16, 'l0_boss0.cpp');
    $list[] = array(120 + 80, 0, 16, 'l0_boss0.cpp');
    $list[] = 400;

    $list[] = array(120 - 4, 30, 32, 'l0_boss1.cpp');
    $list[] = 300;

    foreach (range(1, 5) as $i) {
      $list[] = array(240 - 8, 20, 8, 'l0_enemy1-right.cpp');
      $list[] = array(0, 60, 8, 'l0_enemy1-left.cpp');
      $list[] = 60;
    }
    $list[] = 200;

    foreach (range(10, 1) as $i) {
      $list[] = array(120 - 8 - $i * 10,  0, 8, 'l0_enemy2.cpp');
      $list[] = array(120 + $i * 10,  0, 8, 'l0_enemy2.cpp');
      $list[] = 30;
    }

    $list[] = array(120 - 88, 0, 16, 'l0_boss2.cpp');
    $list[] = array(120 + 80, 0, 16, 'l0_boss2.cpp');
    $list[] = array(120 - 4, 40, 16, 'l0_enemy5-left.cpp');
    $list[] = array(120 - 4, 40, 16, 'l0_enemy5-right.cpp');
    $list[] = 400;

    $list[] = array(120 - 88, 20, 8, 'l0_enemy6.cpp');
    $list[] = array(120 + 80, 20, 8, 'l0_enemy6.cpp');

    $list[] = 200;
    foreach (range(1, 5) as $i) {
      $list[] = array(120 - 108, 10, 4, 'l0_enemy3.cpp');
      $list[] = array(120 + 100, 10, 4, 'l0_enemy3.cpp');
      $list[] = 60;
    }

    $list[] = 200;
    $list[] = array(120 - 68, 20, 16, 'l0_enemy4.cpp');
    $list[] = array(120 + 60, 20, 16, 'l0_enemy4.cpp');

    $list[] = 100;
    foreach (range(1, 3) as $i) {
      $list[] = array(10,  10 + $i * 40, 4, 'l0_enemy7.cpp');
      $list[] = array(222, 10 + $i * 40, 4, 'l0_enemy7.cpp');
    }
    $list[] = 400;

    $list[] = "ACTIONTYPE_BOSS_ENABLE";

    return $list;
  }

  function getList2() {
    $list = array();

    $list[] = array(120 - 4, 40, 8, 'l0_enemy8-bottom.cpp');
    $list[] = 20;
    foreach (range(1, 3) as $i) {
      $list[] = array(120 - 4, 30 + $i * 30, 8, 'l0_enemy8-right.cpp');
      $list[] = 20;
      $list[] = array(120 - 4, 45 + $i * 30, 8, 'l0_enemy8-left.cpp');
      $list[] = 20;
    }
    $list[] = 200;

    foreach (range(1, 5) as $i) {
      $list[] = array(120 - 108, 10 + $i * 25, 8, 'l0_enemy8-right.cpp');
      $list[] = array(120 + 108, 10 + $i * 25, 8, 'l0_enemy8-left.cpp');
      $list[] = 10;
    }
    $list[] = 300;

    $list[] = array(120 - 108, 30, 32, 'l0_enemy9-right.cpp');
    $list[] = array(120 + 100, 30, 32, 'l0_enemy9-left.cpp');

    $list[] = 100;

    $list[] = array(120 - 108, 40, 8, 'l0_enemy6.cpp');
    $list[] = array(120 + 100, 40, 8, 'l0_enemy6.cpp');

    $list[] = 300;

    return $list;
  }

  function getList3() {
    $list = array();

    $list[] = array(120 - 108, 40, 8, 'l0_boss3-right.cpp');
    $list[] = array(120 + 100, 40, 8, 'l0_boss3-left.cpp');

    $list[] = 450;
    $list[] = array(120 - 4, 40, 32, 'l0_boss4.cpp');

    foreach (range(1, 5) as $i) {
      $list[] = array(120 - 88, 0, 4, 'l0_enemy10.cpp');
      $list[] = array(120 + 80, 0, 4, 'l0_enemy10.cpp');
      $list[] = 120;
    }

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 88, 0, 4, 'l0_enemy10.cpp');
      $list[] = array(120 + 80, 0, 4, 'l0_enemy10.cpp');
      $list[] = array(120 - 108, 10, 4, 'l0_enemy3.cpp');
      $list[] = array(120 + 100, 10, 4, 'l0_enemy3.cpp');
      $list[] = 120;
    }

    return $list;
  }

  function getList4() {
    $list = array();

    $list[] = array(120 - 108, 40, 16, 'l0_boss5-right.cpp');
    $list[] = array(120 + 100, 40, 16, 'l0_boss5-left.cpp');
    $list[] = 100;

    foreach (range(1, 10) as $i) {
      $list[] = array(120 - 4, 30, 16, 'l0_enemy11-left.cpp');
      $list[] = array(120 - 4, 30, 16, 'l0_enemy11-right.cpp');
      $list[] = 30;
    }

    foreach (range(1, 5) as $j) {
      foreach (range(1, 10) as $i) {
        $list[] = array(120 - $i * 10 - 8, 10, 16, 'l0_enemy12.cpp');
        $list[] = array(120 + $i * 10, 10, 16, 'l0_enemy12.cpp');
        $list[] = 10;
      }
    }
    foreach (range(10, 1) as $i) {
      $list[] = array(120 - $i * 10 - 8, 10, 16, 'l0_enemy12.cpp');
      $list[] = array(120 + $i * 10, 10, 16, 'l0_enemy12.cpp');
      $list[] = 10;
    }

    $list[] = 60;

    return $list;
  }

  function getList5() {
    $list = array();

    $list[] = array(120 - 68, 40, 2, 'l0_enemy13-right.cpp');
    $list[] = array(120 + 60, 40, 2, 'l0_enemy13-left.cpp');
    $list[] = 10;

    return $list;
  }
}

?>
