//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCUserComment : NSObject <NSCoding>
{
    NSString *commentID;
    NSString *comment64ID;
    NSString *username;
    NSString *nickname;
    NSString *content;
    int source;
    int type;
    unsigned int createTime;
    int isLocalAdded;
    NSString *refCommentID;
    NSString *refComment64ID;
    NSString *refUserName;
    NSString *contentPattern;
    int isRichText;
    BOOL bDeleted;
    NSString *m_cpKeyForComment;
    BOOL m_isCommentUnsafe;
    BOOL isHBComment;
}

+ (id)fromCommentUploadItem:(id)arg1;
+ (id)fromServerCommentObj:(id)arg1;
+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL bDeleted; // @synthesize bDeleted;
@property(retain, nonatomic) NSString *comment64ID; // @synthesize comment64ID;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID;
- (int)compareTime:(id)arg1;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *contentPattern; // @synthesize contentPattern;
@property(retain, nonatomic) NSString *cpKeyForComment; // @synthesize cpKeyForComment=m_cpKeyForComment;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (id)description;
- (id)descriptionForKeyPaths;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL isCommentUnsafe; // @synthesize isCommentUnsafe=m_isCommentUnsafe;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) BOOL isHBComment; // @synthesize isHBComment;
@property(nonatomic) int isLocalAdded; // @synthesize isLocalAdded;
@property(nonatomic) int isRichText; // @synthesize isRichText;
- (id)keyPaths;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *refComment64ID; // @synthesize refComment64ID;
@property(retain, nonatomic) NSString *refCommentID; // @synthesize refCommentID;
@property(retain, nonatomic) NSString *refUserName; // @synthesize refUserName;
@property(nonatomic) int source; // @synthesize source;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *username; // @synthesize username;

@end

