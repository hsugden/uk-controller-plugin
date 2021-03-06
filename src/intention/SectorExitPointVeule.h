#pragma once
#include "intention/SectorExitPoint.h"

namespace UKControllerPlugin {
    namespace Euroscope {
        class EuroscopeExtractedRouteInterface;
    }  // namespace Euroscope
}  // namespace UKControllerPlugin

namespace UKControllerPlugin {
    namespace IntentionCode {

        /*
            Special class to handle aircraft exiting the FIR via VEULE.
        */
        class SectorExitPointVeule : public SectorExitPoint
        {
            public:
                SectorExitPointVeule(std::string name, std::string intentionCode, unsigned int outDirection)
                    : SectorExitPoint(name, intentionCode, outDirection) {}  // namespace IntentionCode
                std::string GetIntentionCode(
                    UKControllerPlugin::Euroscope::EuroscopeExtractedRouteInterface & route,
                    int foundPointIndex,
                    int cruiseLevel
                ) const override;
            };
    }  // namespace IntentionCode
}  // namespace UKControllerPlugin
