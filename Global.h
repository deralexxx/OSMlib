// Copyright 2011 Alexander Jaeger for AYCS UG(haftungsbeschränkt) aycs.de
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//  Created by Alexander Jäger on 09.12.10.
//

#import <Foundation/Foundation.h>
#import "OSM_utilMD5.h"
#import "OSM_Reachability.h"

//DLOG based on three20 Framework see three20.info
#ifdef DEBUG
#    define DLog(...) NSLog(@"%s %@", __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__])
#else
#    define DLog(...) /* */
#endif
#define ALog(...) NSLog(__VA_ARGS__)


@interface Global : NSObject {
}
+(BOOL)isIPAD;

+ (BOOL) validateEmail: (NSString *) candidate;

+ (NSString*)getMultiText:(NSString*)singeValuedString forNumber:(NSNumber*)Number;

+(void)appendGeneralUserInfosForMail:(NSMutableString**)Source;


@end
