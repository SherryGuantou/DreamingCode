#include "Proxy.h"

void Proxy::Init(Mode mode) {
	MODE = mode;
}

void Proxy::onAttack() {
	if(MODE == Client) {
		//call �����߼���
	}
	else {
		//call �����
	}
}

Proxy * Proxy::getProxy() {
	//static Proxy* proxy = new Proxy();
	return &proxy;
}
