#include <string>
#ifndef STOCK_SYSTEM_H
#define STOCK_SYSTEM_H
#include "Bop.h"
#include "Dres.h"
#include "Duna.h"
#include "Eeloo.h"
#include "Eve.h"
#include "Gilly.h"
#include "Ike.h"
#include "Jool.h"
#include "Kerbin.h"
#include "Laythe.h"
#include "Minmus.h"
#include "Moho.h"
#include "Mun.h"
#include "Pol.h"
#include "Sun.h"
#include "Tylo.h"
#include "Vall.h"
const std::string* stockSystem[17] = {
	&Bop_cfg,
	&Dres_cfg,
	&Duna_cfg,
	&Eeloo_cfg,
	&Eve_cfg,
	&Gilly_cfg,
	&Ike_cfg,
	&Jool_cfg,
	&Kerbin_cfg,
	&Laythe_cfg,
	&Minmus_cfg,
	&Moho_cfg,
	&Mun_cfg,
	&Pol_cfg,
	&Sun_cfg,
	&Tylo_cfg,
	&Vall_cfg
};
#endif