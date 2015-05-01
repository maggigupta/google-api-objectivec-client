/* Copyright (c) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLQPXExpressTaxData.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   QPX Express API (qpxExpress/v1)
// Description:
//   Lets you find the least expensive flights between an origin and a
//   destination.
// Documentation:
//   http://developers.google.com/qpx-express
// Classes:
//   GTLQPXExpressTaxData (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLQPXExpressTaxData
//

// Tax data.

@interface GTLQPXExpressTaxData : GTLObject

// An identifier uniquely identifying a tax in a response.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Identifies this as a tax data object, representing some tax. Value: the fixed
// string qpxexpress#taxData.
@property (nonatomic, copy) NSString *kind;

// The name of a tax.
@property (nonatomic, copy) NSString *name;

@end
