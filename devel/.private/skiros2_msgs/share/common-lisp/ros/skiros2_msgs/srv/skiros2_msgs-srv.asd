
(cl:in-package :asdf)

(defsystem "skiros2_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :skiros2_msgs-msg
)
  :components ((:file "_package")
    (:file "ResourceGetDescriptions" :depends-on ("_package_ResourceGetDescriptions"))
    (:file "_package_ResourceGetDescriptions" :depends-on ("_package"))
    (:file "SkillCommand" :depends-on ("_package_SkillCommand"))
    (:file "_package_SkillCommand" :depends-on ("_package"))
    (:file "WmGet" :depends-on ("_package_WmGet"))
    (:file "_package_WmGet" :depends-on ("_package"))
    (:file "WmModify" :depends-on ("_package_WmModify"))
    (:file "_package_WmModify" :depends-on ("_package"))
    (:file "WmQueryRelations" :depends-on ("_package_WmQueryRelations"))
    (:file "_package_WmQueryRelations" :depends-on ("_package"))
    (:file "WmSetRelation" :depends-on ("_package_WmSetRelation"))
    (:file "_package_WmSetRelation" :depends-on ("_package"))
    (:file "WoLoadAndSave" :depends-on ("_package_WoLoadAndSave"))
    (:file "_package_WoLoadAndSave" :depends-on ("_package"))
    (:file "WoModify" :depends-on ("_package_WoModify"))
    (:file "_package_WoModify" :depends-on ("_package"))
    (:file "WoQuery" :depends-on ("_package_WoQuery"))
    (:file "_package_WoQuery" :depends-on ("_package"))
  ))