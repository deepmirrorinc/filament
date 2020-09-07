/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TNT_FILAMENT_SAMPLE_CONFIG_H
#define TNT_FILAMENT_SAMPLE_CONFIG_H

#include <string>

#include <filament/Engine.h>

#include <camutils/Manipulator.h>
#include <math/vec3.h>
#include <math/mat4.h>
struct Config {
    std::string title;
    std::string iblDirectory;
    std::string dirt;
    float scale = 1.0f;
    bool splitView = false;
    filament::Engine::Backend backend = filament::Engine::Backend::OPENGL;
    filament::camutils::Mode cameraMode = filament::camutils::Mode::ORBIT;
    filament::math::mat4f origin_camera_pose;
    filament::math::float3 eye_position{0,4,0};
    filament::math::float3 target_position{0,0,-4};
    filament::math::float3 up_vec{0,1,0};

    bool resizeable = true;
    bool headless = false;
};

#endif // TNT_FILAMENT_SAMPLE_CONFIG_H
