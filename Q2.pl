#!/usr/bin/perl -w
use strict;
my %count;
my @word;
line = "人易科技:上 機 測 驗 - 演算法"
for (@line)
{
  chomp;
  @word =split / /,$_;
  if($_ eq ":"){
    $_=~ s/:/：/r;
  }
  if($_ eq "-"){
    $_=" - ";
  }
}
for(@word){print @word;}