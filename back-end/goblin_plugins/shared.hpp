/***
 * Created by Jim Marsden on 3/3/21
 *
 * this file will outline our primary api/abi for plugins
 * Anytime I say dll, I will likely mean shared object.
 * I don't know all the events we need.
 *
 * We might need to do out params for abi reasons.
 *
 */
#ifndef GOBLIN_CMS_SHARED_HPP
#define GOBLIN_CMS_SHARED_HPP

#define DYNALO_EXPORT_SYMBOLS // Required for dll exports.
#include <dynalo/symbol_helper.hpp> //required for more dll related things

#include <string>

DYNALO_EXPORT void DYNALO_CALL on_connect(std::string const & path, std::string const & foreign_ip);

#endif //GOBLIN_CMS_SHARED_HPP
