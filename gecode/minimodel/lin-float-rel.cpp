/* -*- mode: C++; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/*
 *  Main authors:
 *     Vincent Barichard <Vincent.Barichard@univ-angers.fr>
 *
 *  Copyright:
 *     Vincent Barichard, 2012
 *
 *  Last modified:
 *     $Date: 2012-03-27 22:34:39 +0900 (火, 27 3 2012) $ by $Author: schulte $
 *     $Revision: 12635 $
 *
 *  This file is part of Gecode, the generic constraint
 *  development environment:
 *     http://www.gecode.org
 *
 *  Permission is hereby granted, free of charge, to any person obtaining
 *  a copy of this software and associated documentation files (the
 *  "Software"), to deal in the Software without restriction, including
 *  without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to
 *  permit persons to whom the Software is furnished to do so, subject to
 *  the following conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 *  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 *  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 *  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include <gecode/minimodel.hh>

namespace Gecode {

  /*
   * Construction of linear float relations
   *
   */
  LinFloatRel
  operator ==(const FloatVal& l, const FloatVar& r) {
    return LinFloatRel(l,FRT_EQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator ==(const FloatVal& l, const LinFloatExpr& r) {
    return LinFloatRel(l,FRT_EQ,r);
  }
  LinFloatRel
  operator ==(const FloatVar& l, const FloatVal& r) {
    return LinFloatRel((const LinFloatExpr&)l,FRT_EQ,r);
  }
  LinFloatRel
  operator ==(const LinFloatExpr& l, const FloatVal& r) {
    return LinFloatRel(l,FRT_EQ,r);
  }
  LinFloatRel
  operator ==(const FloatVar& l, const FloatVar& r) {
    return LinFloatRel((const LinFloatExpr&)l,FRT_EQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator ==(const FloatVar& l, const LinFloatExpr& r) {
    return LinFloatRel((const LinFloatExpr&)l,FRT_EQ,r);
  }
  LinFloatRel
  operator ==(const LinFloatExpr& l, const FloatVar& r) {
    return LinFloatRel(l,FRT_EQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator ==(const LinFloatExpr& l, const LinFloatExpr& r) {
    return LinFloatRel(l,FRT_EQ,r);
  }

  LinFloatRel
  operator <=(const FloatVal& l, const FloatVar& r) {
    return LinFloatRel(l,FRT_LQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator <=(const FloatVal& l, const LinFloatExpr& r) {
    return LinFloatRel(l,FRT_LQ,r);
  }
  LinFloatRel
  operator <=(const FloatVar& l, const FloatVal& r) {
    return LinFloatRel(l,FRT_LQ,r);
  }
  LinFloatRel
  operator <=(const LinFloatExpr& l, const FloatVal& r) {
    return LinFloatRel(l,FRT_LQ,r);
  }
  LinFloatRel
  operator <=(const FloatVar& l, const FloatVar& r) {
    return LinFloatRel((const LinFloatExpr&)l,FRT_LQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator <=(const FloatVar& l, const LinFloatExpr& r) {
    return LinFloatRel((const LinFloatExpr&)l,FRT_LQ,r);
  }
  LinFloatRel
  operator <=(const LinFloatExpr& l, const FloatVar& r) {
    return LinFloatRel(l,FRT_LQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator <=(const LinFloatExpr& l, const LinFloatExpr& r) {
    return LinFloatRel(l,FRT_LQ,r);
  }

  LinFloatRel
  operator >=(const FloatVal& l, const FloatVar& r) {
    return LinFloatRel(l,FRT_GQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator >=(const FloatVal& l, const LinFloatExpr& r) {
    return LinFloatRel(l,FRT_GQ,r);
  }
  LinFloatRel
  operator >=(const FloatVar& l, const FloatVal& r) {
    return LinFloatRel((const LinFloatExpr&)l,FRT_GQ,r);
  }
  LinFloatRel
  operator >=(const LinFloatExpr& l, const FloatVal& r) {
    return LinFloatRel(l,FRT_GQ,r);
  }
  LinFloatRel
  operator >=(const FloatVar& l, const FloatVar& r) {
    return LinFloatRel((const LinFloatExpr&)l,FRT_GQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator >=(const FloatVar& l, const LinFloatExpr& r) {
    return LinFloatRel((const LinFloatExpr&)l,FRT_GQ,r);
  }
  LinFloatRel
  operator >=(const LinFloatExpr& l, const FloatVar& r) {
    return LinFloatRel(l,FRT_GQ,(const LinFloatExpr&)r);
  }
  LinFloatRel
  operator >=(const LinFloatExpr& l, const LinFloatExpr& r) {
    return LinFloatRel(l,FRT_GQ,r);
  }

}

// STATISTICS: minimodel-any
