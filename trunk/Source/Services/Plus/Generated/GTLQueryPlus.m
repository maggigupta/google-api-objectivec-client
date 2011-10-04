/* Copyright (c) 2011 Google Inc.
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
//  GTLQueryPlus.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ API (plus/v1)
// Description:
//   The Google+ API enables developers to build on top of the Google+ platform.
// Documentation:
//   http://developers.google.com/+/api/
// Classes:
//   GTLQueryPlus (8 custom class methods, 10 custom properties)

#import "GTLQueryPlus.h"

#import "GTLPlusActivity.h"
#import "GTLPlusActivityFeed.h"
#import "GTLPlusComment.h"
#import "GTLPlusCommentFeed.h"
#import "GTLPlusPeopleFeed.h"
#import "GTLPlusPerson.h"

@implementation GTLQueryPlus

@dynamic activityId, alt, collection, commentId, fields, maxResults, orderBy,
         pageToken, query, userId;

+ (NSDictionary *)defaultValueMap {
  NSDictionary *allMethodsMap =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"json", @"alt",
      [NSNumber numberWithInteger:20], @"maxResults",
      @"recent", @"orderBy",
      nil];
  NSDictionary *plusActivitiesSearchMap =
    [NSDictionary dictionaryWithObject:[NSNumber numberWithInteger:10]
                                forKey:@"maxResults"];
  NSDictionary *plusPeopleSearchMap =
    [NSDictionary dictionaryWithObject:[NSNumber numberWithInteger:10]
                                forKey:@"maxResults"];

  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      allMethodsMap, @"***",
      plusActivitiesSearchMap, @"plus.activities.search",
      plusPeopleSearchMap, @"plus.people.search",
      nil];
  return map;
}

#pragma mark -
#pragma mark "activities" methods
// These create a GTLQueryPlus object.

+ (id)queryForActivitiesGetWithActivityId:(NSString *)activityId {
  NSString *methodName = @"plus.activities.get";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.activityId = activityId;
  query.expectedObjectClass = [GTLPlusActivity class];
  return query;
}

+ (id)queryForActivitiesListWithUserId:(NSString *)userId
                            collection:(NSString *)collection {
  NSString *methodName = @"plus.activities.list";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.collection = collection;
  query.expectedObjectClass = [GTLPlusActivityFeed class];
  return query;
}

+ (id)queryForActivitiesSearch {
  NSString *methodName = @"plus.activities.search";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLPlusActivityFeed class];
  return query;
}

#pragma mark -
#pragma mark "comments" methods
// These create a GTLQueryPlus object.

+ (id)queryForCommentsGetWithCommentId:(NSString *)commentId {
  NSString *methodName = @"plus.comments.get";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.commentId = commentId;
  query.expectedObjectClass = [GTLPlusComment class];
  return query;
}

+ (id)queryForCommentsListWithActivityId:(NSString *)activityId {
  NSString *methodName = @"plus.comments.list";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.activityId = activityId;
  query.expectedObjectClass = [GTLPlusCommentFeed class];
  return query;
}

#pragma mark -
#pragma mark "people" methods
// These create a GTLQueryPlus object.

+ (id)queryForPeopleGetWithUserId:(NSString *)userId {
  NSString *methodName = @"plus.people.get";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.expectedObjectClass = [GTLPlusPerson class];
  return query;
}

+ (id)queryForPeopleListByActivityWithActivityId:(NSString *)activityId
                                      collection:(NSString *)collection {
  NSString *methodName = @"plus.people.listByActivity";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.activityId = activityId;
  query.collection = collection;
  query.expectedObjectClass = [GTLPlusPeopleFeed class];
  return query;
}

+ (id)queryForPeopleSearch {
  NSString *methodName = @"plus.people.search";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLPlusPeopleFeed class];
  return query;
}

@end
