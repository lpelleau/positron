/* -*- indent-tabs-mode: nil; js-indent-level: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

//-----------------------------------------------------------------------------
var BUGNUMBER = 474769;
var summary = 'TM: nested for each type-unstable loops';
var actual = '';
var expect = '';


//-----------------------------------------------------------------------------
test();
//-----------------------------------------------------------------------------

function test()
{
  enterFunc ('test');
  printBugNumber(BUGNUMBER);
  printStatus (summary);
 
  expect = 1;


  for each (b in [1, 1, 1, 1.5, 1, 1]) {
      (function() { for each (let h in [0, 0, 1.4, ""]) {} })();
  }
  actual = b;


  reportCompare(expect, actual, summary);

  exitFunc ('test');
}
