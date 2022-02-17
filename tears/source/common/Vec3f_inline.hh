//----------------------------------------------------------------------------//
//
// Project Tears Engine
// Copyright (C) 2021-2022 hvhvdevdev <m@hvdev.cc>
//
// This file is part of Tears Engine.
//
// Tears Engine is free software: you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation, either version 2.1 of the License, or (at your option)
// any later version.
//
// Tears Engine is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
// details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Tears Engine. If not, see <https://www.gnu.org/licenses/>.
//
//----------------------------------------------------------------------------//

/*!
 * \file Vec3f_inline.hh
 * \brief This file define inline member functions of class \ref
 * trs::common:Vec3f
 * \author hvhvdevdev
 */

//----------------------------------------------------------------------------//

#include "Vec3f.hh"

namespace trs::common {

//----------------------------------------------------------------------------//

inline Vec3f::Vec3f() : x_{ 0 }, y_{ 0 }, z_{ 0 } {}

//----------------------------------------------------------------------------//

inline Vec3f::Vec3f( float x, float y, float z ) : x_( x ), y_{ y }, z_{ z } {}

//----------------------------------------------------------------------------//

inline Vec3f Vec3f::operator+( const Vec3f &rhs ) const {
  // TODO
}

//----------------------------------------------------------------------------//

inline Vec3f Vec3f::operator-( const Vec3f &rhs ) const {
  // TODO
}

//----------------------------------------------------------------------------//

inline float Vec3f::dot( const Vec3f &rhs ) const {
  return 0;
}

//----------------------------------------------------------------------------//

inline Vec3f Vec3f::operator*( const Vec3f &rhs ) const {
  return Vec3f();
}

//----------------------------------------------------------------------------//

inline bool Vec3f::operator==( const Vec3f &rhs ) const {
  return false;
}
float Vec3f::GetX() const {
  return x_;
}
void Vec3f::SetX( float new_x ) {
  x_ = new_x;
}
float Vec3f::GetY() const {
  return y_;
}
void Vec3f::SetY( float new_y ) {
  y_ = new_y;
}
float Vec3f::GetZ() const {
  return z_;
}
void Vec3f::SetZ( float new_z ) {
  z_ = new_z;
}

//----------------------------------------------------------------------------//

}  // namespace trs::common