//
//  NJHttpTool.h
//  NJWisdomCard
//
//  Created by apple on 15/8/25.
//  Copyright (c) 2015年 Weconex. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HttpTool : NSObject
+ (void)get:(NSString *)url params:(NSDictionary *)params success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
+ (void)post:(NSString *)url params:(NSDictionary *)params success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
+ (void)postForms:(NSString *)url params:(NSDictionary *)params success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
+ (void)uploadImageWithNSData:(NSData *)data success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
+ (void)postImage:(NSData *)data url:(NSString *)url params:(NSDictionary *)params success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
@end
