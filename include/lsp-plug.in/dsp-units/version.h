/*
 * Copyright (C) 2020 Linux Studio Plugins Project <https://lsp-plug.in/>
 *           (C) 2020 Vladimir Sadovnikov <sadko4u@gmail.com>
 *
 * This file is part of lsp-dsp-units
 * Created on: 19 нояб. 2020 г.
 *
 * lsp-dsp-units is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * lsp-dsp-units is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with lsp-dsp-units. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef LSP_PLUG_IN_DSP_UNITS_VERSION_H_
#define LSP_PLUG_IN_DSP_UNITS_VERSION_H_

// Define version of headers
#define LSP_DSP_UNITS_MAJOR         0
#define LSP_DSP_UNITS_MINOR         5
#define LSP_DSP_UNITS_MICRO         0

#ifdef LSP_DSP_UNITS_BUILTIN
    #define LSP_DSP_UNITS_CPPEXPORT
    #define LSP_DSP_UNITS_CEXPORT
#else
    #define LSP_DSP_UNITS_CPPEXPORT     __attribute__((visibility("default")))
    #define LSP_DSP_UNITS_CEXPORT       __attribute__((visibility("default")))
#endif

#ifdef __cplusplus
    #define LSP_DSP_UNITS_CPPIMPORT     extern
    #define LSP_DSP_UNITS_CIMPORT       extern "C"
#else
    #define LSP_DSP_UNITS_CPPIMPORT
    #define LSP_DSP_UNITS_CIMPORT       extern
#endif


#endif /* LSP_PLUG_IN_DSP_UNITS_VERSION_H_ */