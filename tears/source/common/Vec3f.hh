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
 * \file Vec3f.hh
 * \brief This file defines class \ref trs::common::Vec3f
 * \author hvhvdevdev
 */

//----------------------------------------------------------------------------//

#ifndef TRS_COMMON_VEC3F_HH_INCLUDED
#define TRS_COMMON_VEC3F_HH_INCLUDED

//----------------------------------------------------------------------------//

namespace trs::common {

//----------------------------------------------------------------------------//

/*!
 * \brief Vector using three floats as components
 * \author hvhvdevdev
 */
class Vec3f {
 public:
  /*!
   * \brief Default constructor
   * \pre None
   * \post A \ref Vec3f is constructed with x = 0, y = 0 and z = 0
   * \author hvhvdevdev
   */
  explicit inline Vec3f();

  /*!
   * \brief Constructor that takes value of three components
   * \param x Specify value of "x" component
   * \param y Specify value of "y" component
   * \param z Specify value of "z" component
   * \pre None
   * \post A \ref Vec3f is constructed with specified component values
   * \author hvhvdevdev
   */
  explicit inline Vec3f( float x, float y, float z );

  /*!
   * \brief Add this \ref Vec3f with another \ref Vec3f
   * \param rhs The right-hand side vector
   * \pre Both this and rhs \ref Vec3f are initialized
   * \post A new \ref Vec3f vector sum is returned
   * \author hvhvdevdev
   */
  inline Vec3f operator+( const Vec3f& rhs ) const;

  /*!
   * \brief Subtract this \ref Vec3f by another \ref Vec3f
   * \param rhs The right-hand side vector
   * \pre Both this and rhs \ref Vec3f are initialized
   * \post A new \ref Vec3f vector difference is returned
   * \author hvhvdevdev
   */
  inline Vec3f operator-( const Vec3f& rhs ) const;

  /*!
   * \brief Cross-product of this \ref Vec3f and another \ref Vec3f
   * \param rhs The right-hand side vector
   * \pre Both this and rhs \ref Vec3f are initialized
   * \post A new \ref Vec3f vector product is returned
   * \author hvhvdevdev
   */
  inline Vec3f operator*( const Vec3f& rhs ) const;

  /*!
   * \brief Check if this \ref Vec3f is equal to another \ref Vec3f
   * \param rhs The right-hand side vector
   * \pre Both this and rhs \ref Vec3f are initialized
   * \post `true` is returned if this \ref Vec3f is equal to another \ref Vec3f.
   * `false` is returned otherwise
   * \author hvhvdevdev
   */
  inline bool operator==( const Vec3f& rhs ) const;

  /*!
   * \brief Dot-product of this \ref Vec3f and another \ref Vec3f
   * \param rhs The right-hand side vector
   * \pre Both this and rhs \ref Vec3f are initialized
   * \post The scalar product is returned
   * \author hvhvdevdev
   */
  inline float dot( const Vec3f& rhs ) const;

 private:
  //! \brief "x" component
  float x_;
  //! \brief "y" component
  float y_;
  //! \brief "z" component
  float z_;
};

//----------------------------------------------------------------------------//

}  // namespace trs::common

//----------------------------------------------------------------------------//

// Inline definitions of class methods
#include "Vec3f_inline.hh"

#endif

//----------------------------------------------------------------------------//