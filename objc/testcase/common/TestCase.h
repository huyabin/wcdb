/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <WCDB/WCDB.h>
#import <XCTest/XCTest.h>

/* TODO list
 * fts (and fix its bug)
 * redirectable
 * WCTError
 * WCTHandle
 * multi-thread and subthread checkpoint
 * complete the convenient and database tests
 * refactor
 */

@interface TestCase : XCTestCase

@property(class, readonly) NSString *baseDirectory;

@property(readonly) NSString *recommendedDirectory;

@property(readonly) NSString *recommendedPath;

@property(readonly) WCTTag recommendedTag;

@property(readonly) NSFileManager *fileManager;

@property(class, readonly) NSString *className;

@property(readonly) NSString *className;

@property(class, readonly) NSString *cachedDirectory;

@end