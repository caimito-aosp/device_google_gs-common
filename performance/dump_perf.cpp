/*
 * Copyright 2022 The Android Open Source Project
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

#include <dump/pixel_dump.h>

int main() {
    dumpFileContent("VENDOR PROC DUMP", "/proc/vendor_sched/dump_task");
    dumpFileContent("BTS scenario", "/sys/kernel/debug/bts/scenario");
    dumpFileContent("BTS vc", "/sys/kernel/debug/bts/vc");
    dumpFileContent("BTS status", "/sys/kernel/debug/bts/status");
    return 0;
}
