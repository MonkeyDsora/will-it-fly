#ifndef __WIF_CORE_HPP_INCLUDED__
#define __WIF_CORE_HPP_INCLUDED__

#include <cstdint>
#include "line_2d_c.hpp"
#include "airfoil_c.hpp"
#include "source_sheet_c.hpp"
#include "flow_accumulate_c.hpp"
#include "source_sink_c.hpp"
#include "uniform_flow_c.hpp"
#include "vortex_sheet_c.hpp"

namespace wif_core
{


uint32_t get_version();


} // namespace wif_core

#endif // __WIF_CORE_HPP_INCLUDED__
