//
// Copyright 2019 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#include <mayaUsd/fileio/primReaderRegistry.h>
#include <mayaUsd/fileio/translators/translatorRfMLight.h>

#include <pxr/usd/usdLux/cylinderLight.h>
#include <pxr/usd/usdLux/diskLight.h>
#include <pxr/usd/usdLux/distantLight.h>
#include <pxr/usd/usdLux/domeLight.h>
#include <pxr/usd/usdLux/geometryLight.h>
#include <pxr/usd/usdLux/rectLight.h>
#include <pxr/usd/usdLux/sphereLight.h>

PXR_NAMESPACE_OPEN_SCOPE

#ifdef MAYA_USD_IMPORT_PXR_LIGHTS

PXRUSDMAYA_DEFINE_READER(UsdLuxCylinderLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}

PXRUSDMAYA_DEFINE_READER(UsdLuxDiskLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}

PXRUSDMAYA_DEFINE_READER(UsdLuxDistantLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}

PXRUSDMAYA_DEFINE_READER(UsdLuxDomeLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}

PXRUSDMAYA_DEFINE_READER(UsdLuxGeometryLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}

PXRUSDMAYA_DEFINE_READER(UsdLuxRectLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}

PXRUSDMAYA_DEFINE_READER(UsdLuxSphereLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}
#endif

// Moving to use PXRUSDMAYA_DEFINE_READER_FOR_USD_TYPE in anticipation of
// codeless schemas for UsdRi types to be available soon!
PXRUSDMAYA_DEFINE_READER_FOR_USD_TYPE(PxrAovLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}

// Moving to use PXRUSDMAYA_DEFINE_READER_FOR_USD_TYPE in anticipation of
// codeless schemas for UsdRi types to be available soon!
PXRUSDMAYA_DEFINE_READER_FOR_USD_TYPE(PxrEnvDayLight, args, context)
{
    return UsdMayaTranslatorRfMLight::Read(args, context);
}

PXR_NAMESPACE_CLOSE_SCOPE
