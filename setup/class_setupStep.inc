<?php

/*
   This code is part of GOsa (https://gosa.gonicus.de)
   Copyright (C) 2007 Fabian Hickert

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


class setup_step extends plugin
{
  var $s_title      = "Still undefined";
  var $s_title_long = "This is a still undefined long title";
  var $s_info       = "This info is still undefined. This setup step detect the type of your ldap. This is a basic requirement for gosa.";
  var $is_active    = false;
  var $is_enabled   = false;
  var $is_completed = false;
  var $b_displayCheckbutton = false;

  var $header_image = "images/setup/user.png";

  var $attributes   = array();
  var $parent       = NULL;
  var $dialog       = FALSE;
  
  function __construct()
  {
  }

  function execute()
  { 
  }

  function save_object()
  {
    /* Do not call plugin::save_object. This causes acl trouble  */
  }

  function get_title()
  { 
    return($this->s_title);
  }

  function get_long_title()
  { 
    return($this->s_title_long);
  }

  function get_small_info()
  { 
    return($this->s_info);
  }
  
  function is_active()
  {
    return($this->is_active);
  }

  function is_enabled()
  {
    return($this->is_enabled);
  }

  function is_completed()
  {
    return($this->is_completed);
  }

  function set_active($value = TRUE)
  {
    if($value){ 
      $this->is_active = TRUE;  
    }else{
      $this->is_active = FALSE;  
    }
  }

  function set_enabled($value = TRUE)
  {
    if($value){ 
      $this->is_enabled = TRUE;  
    }else{
      $this->is_enabled = FALSE;  
    }
  }

  function set_completed($value = TRUE)
  {
    if($value){ 
      $this->is_completed = TRUE;  
    }else{
      $this->is_completed = FALSE;  
    }
  }

  /* Return attributes handled by this setup step */
  function get_attributes()
  {
    $tmp = array();
    foreach($this->attributes as $attr){
      $tmp[$attr] = $this->$attr;
    }
    return($tmp);
  }

  function getTitle()
  {
      return($this->s_title_long);
  }

  function getImage()
  {
      return($this->header_image);
  }

}

// vim:tabstop=2:expandtab:shiftwidth=2:filetype=php:syntax:ruler:
?>
