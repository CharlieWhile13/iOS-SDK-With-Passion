/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSKeyboardCommandCategory : NSObject {
    NSArray * _commands;
    NSString * _localizedName;
}

@property (nonatomic, readonly) NSArray *commands;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)_categoryWithCommandIdentifiers:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3;
+ (id)_categoryWithCommands:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3;
+ (id)_deviceCommandsFromAvailableCommands:(id)arg1;
+ (id)_gesturesCommandsFromAvailableCommands:(id)arg1;
+ (id)_navigationCommandsFromAvailableCommands:(id)arg1;
+ (id)allCategoriesForAvailableCommands:(id)arg1;

- (void).cxx_destruct;
- (id)commands;
- (id)initWithCommands:(id)arg1 localizedName:(id)arg2;
- (id)localizedName;

@end