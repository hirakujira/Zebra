//
//  ZBDatabaseManager.h
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Packages/Helpers/ZBPackage.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBDatabaseManager : NSObject
- (void)fullImport;
- (void)fullRemoteImport;
- (void)fullLocalImport;
- (int)numberOfPackagesInRepo:(int)repoID;
- (NSArray <NSDictionary *> *)installedPackages;
- (NSMutableArray *)packagesFromRepo:(int)repoID numberOfPackages:(int)limit startingAt:(int)start;
- (NSArray <NSDictionary *> *)sources;
- (NSArray <NSDictionary *> *)searchForPackageName:(NSString *)name numberOfResults:(int)results;
@end

NS_ASSUME_NONNULL_END
