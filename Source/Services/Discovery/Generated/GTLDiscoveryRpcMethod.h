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
//  GTLDiscoveryRpcMethod.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   APIs Discovery Service (discovery/v1)
// Description:
//   Lets you discover information about other Google APIs, such as what APIs
//   are available, the resource and method details for each API.
// Documentation:
//   https://developers.google.com/discovery/
// Classes:
//   GTLDiscoveryRpcMethod (0 custom class methods, 14 custom properties)
//   GTLDiscoveryRpcMethodMediaUpload (0 custom class methods, 2 custom properties)
//   GTLDiscoveryRpcMethodParameters (0 custom class methods, 0 custom properties)
//   GTLDiscoveryRpcMethodReturns (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDiscoveryJsonSchema;
@class GTLDiscoveryRpcMethodMediaUpload;
@class GTLDiscoveryRpcMethodParameters;
@class GTLDiscoveryRpcMethodReturns;

// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcMethod
//

@interface GTLDiscoveryRpcMethod : GTLObject

// Whether the method can be made using an HTTP GET JSON-RPC request.
@property (nonatomic, retain) NSNumber *allowGet;  // boolValue

// Description of this method.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// Does this method require sending the ETag along with the request.
@property (nonatomic, retain) NSNumber *etagRequired;  // boolValue

// A unique ID for this method. This property can be used to match methods
// between different versions of Discovery.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Media upload parameters.
@property (nonatomic, retain) GTLDiscoveryRpcMethodMediaUpload *mediaUpload;

// Ordered list of required parameters, serves as a hint to clients on how to
// structure their method signatures. The array is ordered such that the
// "most-significant" parameter appears first.
@property (nonatomic, retain) NSArray *parameterOrder;  // of NSString

// Description for all parameters in this method.
@property (nonatomic, retain) GTLDiscoveryRpcMethodParameters *parameters;

// The schema for the response.
@property (nonatomic, retain) GTLDiscoveryRpcMethodReturns *returns;

// OAuth 2.0 scopes applicable to this method.
@property (nonatomic, retain) NSArray *scopes;  // of any JSON type

// Whether this method supports media download.
@propenonatomic, rty (retain) NSNumber *supportsMediaDownload;  // boolValue

// Whether this method supports media upload.
@propenonatomic, retain) NSNumber *supportsMediaUpload;  // boolValue

// Whether this method supports patch semantics.
@property (nonatomic, rty (retain) NSNumber *supportsPatch;  // boolValue

// Whether this method supports subscriptions.
@propenonatomic, rty (retain) NSNumber *supportsSubscription;  // boolVa// Indicates that downloads from this method should use the download service URL
// (i.e. "/download"). Only applies if the method supports media download.
@property (nonatomic, retain) NSNumber *useMediaDownloadService;  // boolValue

@end


// ---------------------------------------------------------------------------------
//
//   GTLDiscoveryRpcMethodMediaUpload
//

@interface GTLDiscoveryRpcMethodMediaUpload : GTLObject

// MIME Media Ranges for acceptable media uploads to this method.
@propenonatomic, rty (retain) NSArray *accept;  // of NSString

// Maximum size of a media upload, such as "1MB", "2GB" or "3TB".
@propenonatomic, rty (copy) NSString *maxSize;

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcMethodParameters
//

@interface GTLDiscoveryRpcMethodParameters : GTLObject
// This object is documented as having more properties that are
// GTLDiscoveryJsonSchema. Use -additionalJSONKeys and
// -additionalPropertyForName: to get the list of properties and then fetch
// them; or -additionalProperties to fetch them all at once.
@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcMethodReturns
//

@interface GTLDiscoveryRpcMethodReturns : GTLObject

// Schema ID for the response schema.
@propenonatomic, rty (copy) NSString *xRef;

