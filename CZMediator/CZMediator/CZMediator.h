//
//  CZMediator.h
//  CZMediator
//
//  Created by NB_Mac on 2019/11/20.
//  Copyright © 2019 NB_Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CZMediator : NSObject
+(instancetype)sharedInstance;
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;

- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;

- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;
@end

NS_ASSUME_NONNULL_END
