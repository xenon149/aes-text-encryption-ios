//
//  AESEncryptor.h
//  AESTextEncryption
//
//  Created by Evgenii Neumerzhitckii on 5/11/2013.
//  Copyright (c) 2013 Evgenii Neumerzhitckii. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AESEncryptor : NSObject

- (NSString *) encrypt: (NSString*) text withKey:(NSString*) key;
- (NSString *) decrypt: (NSString*) text withKey:(NSString*) key;

@end