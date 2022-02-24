/**********************************************************************************************
 * This file is part of the TVL Project.                                                      *
 * Copyright (C) 2022 by TVL-Team                                                             *
 *                                                                                            *
 * This file is part of TVL - a template simd library.                                        *
 *                                                                                            *
 * This program is free software: you can redistribute it and/or modify it under the          *
 * terms of the GNU General Public License as published by the Free Software Foundation,      *
 * either version 3 of the License, or (at your option) any later version.                    *
 *                                                                                            *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;  *
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  *
 * See the GNU General Public License for more details.                                       *
 *                                                                                            *
 * You should have received a copy of the GNU General Public License along with this program. *
 * If not, see <http://www.gnu.org/licenses/>.                                                *
 **********************************************************************************************/
 //todo: Apache2
/*
 * @file lib/generated/extensions/arm/neon.hpp
 * @date 17.02.2022
 * @brief 
 */
#ifndef TUD_D2RG_TVL_LIB_GENERATED_EXTENSIONS_ARM_NEON_HPP
#define TUD_D2RG_TVL_LIB_GENERATED_EXTENSIONS_ARM_NEON_HPP

#include <arm_neon.h>

namespace tvl {
   struct neon {
      using default_size_in_bits = std::integral_constant< std::size_t, 128 >;
      template< Arithmetic BaseType, std::size_t VectorSizeInBits = default_size_in_bits::value >
      struct types {
         using register_t  =
            TVL_DEP_TYPE(
               (std::is_integral_v< BaseType >),
               int64x2_t,
               TVL_DEP_TYPE(
                  (sizeof( BaseType ) == 4),
                  float32x4_t,
                  float64x2_t
               )
            );
         using mask_t =
            uint64x2_t;
      };
   };
   
} // end of namespace tvl

#endif //TUD_D2RG_TVL_LIB_GENERATED_EXTENSIONS_ARM_NEON_HPP