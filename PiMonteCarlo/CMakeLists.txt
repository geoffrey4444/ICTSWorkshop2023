# Distributed under the MIT License.
# See LICENSE.txt for details.

set(LIBS_TO_LINK
  Informer
  Options
  Parallel
  SystemUtilities
  Utilities
  )

add_spectre_parallel_executable(
  PiMonteCarlo
  PiMonteCarlo
  Executables/Examples/PiMonteCarlo
  Metavariables
  "${LIBS_TO_LINK}"
  )
